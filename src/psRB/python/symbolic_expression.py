
import enum

class SCType(enum.Enum):
        INF = 1
        NAT = 2
        INPUT = 3
        TOP = 4

class SymbolicConst(object):
    def __init__(self, value = None) -> None:
        self.value = value if value else 0
        self.type = SCType.INF if value == "inf" else SCType.TOP if value == "top" else SCType.INPUT if isinstance(value, str) else SCType.NAT if isinstance(value, int) else SCType.NAT


class SymbolicExpression:
    def __init__(self, value = None, operator = None) -> None:
        self.value = value if value else SymbolicConst()
        self.operator = operator
    
    # TODO: Some simplification
    def __add__(self, other):
        return SymbolicExpression((self, other), "+")


    # TODO: Some simplification
    def __radd__(self, other):
        return SymbolicExpression((self, other), "+")
    
    # TODO: Some simplification
    def __mul__(self, other):
        return SymbolicExpression((self, other), "*")


    # TODO: Some simplification
    def adapt_max(self, other):
        return SymbolicExpression([self, other], "max")

    # TODO: Some simplification
    def adapt_min(self, other):
        return SymbolicExpression([self, other], "min")
        if (isinstance(self.value, str)) and isinstance(other.value, str):
            if (isinstance(self.value, int) and int(self.value) == 0):
                return self
            if (isinstance(other.value, int) and int(other.value) == 0):
                return other
            return SymbolicExpression("min(" + str(self.value) + ", " + str(other.value) + ")")
        elif (isinstance(self.value, str)) or (isinstance(other.value, str)):
            return self  if other.value == 0 else other if self.value == 0 else SymbolicExpression("min(" + str(self.value) + ", " + str(other.value) + ")")
            # if other.value == 0:
        # elif (isinstance(other.value, str)) and self.value == 0:
        #     return other
        else:
            return SymbolicExpression(min(self.value, other.value))

    def pretty_symbolic_expression(self):
        # If the expression is an symbolic const
        if self.operator is None:
            return self.value.value
        elif self.operator == "max" or self.operator == "min":
            return "{}{{{}}}".format(self.operator, ",".join([v.pretty_symbolic_expression() for v in self.value]))
        else:
            return "{}{}{}".format(self.value[0].pretty_symbolic_expression(), self.operator, self.value[1].pretty_symbolic_expression())
    

    # def __lt__(self, other):
    #     if (self.value is int) and (other.value is int):
    #         return self.value < other.value

    # def __le__(self, other):
    #     return self.value <= other.value

    # def __eq__(self, other):
    #     return self.value == other.value

    # def __ne__(self, other):
    #     return self.value != other.value

    # def __gt__(self, other):
    #     return self.value > other.value

    # def __ge__(self, other):
    #     return self.value >= other.value

    # def __str__(self):
    #     return str(self.value)

