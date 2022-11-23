class SymbolicExpression:
    value = 0
    def __init__(self, value = 0) -> None:
        self.value = value
    def __add__(self, other):
        if (isinstance(self.value, str)) or isinstance(other.value, str):
            if (isinstance(self.value, int) and int(self.value) == 0):
                return other
            if (isinstance(other.value, int) and int(other.value) == 0):
                return self
            return SymbolicExpression(str(self.value) + " + " + str(other.value))
        else:
            # print(self.value, other.value, " both are int")
            return SymbolicExpression(self.value + other.value)

    def __radd__(self, other):
        if (isinstance(self.value, str)) or isinstance(other.value, str):
            if (isinstance(self.value, int) and int(self.value) == 0):
                return other
            if (isinstance(other.value, int) and int(other.value) == 0):
                return self
            return SymbolicExpression(str(other.value) + " + " + str(self.value))
        else:
            # print(self.value, other.value, " both are int")
            return SymbolicExpression(self.value + other.value)
    
    def __mul__(self, other):
        if (isinstance(self.value, str)) or isinstance(other.value, str):
            if (isinstance(self.value, int) and int(self.value) == 0) or (isinstance(other.value, int) and int(other.value) == 0):
                return SymbolicExpression(0)
            if (isinstance(self.value, int) and int(self.value) == 1):
                return other
            if (isinstance(other.value, int) and int(other.value) == 1):
                return self
            return SymbolicExpression("(" + str(other.value) + ") * (" + str(self.value) + ")")
        else:
            # print(self.value, other.value, " both are int")
            return SymbolicExpression(self.value * (other.value))

    def adapt_max(self, other):
        if (isinstance(self.value, str)) and isinstance(other.value, str):
            if (isinstance(self.value, int) and int(self.value) == 0):
                return other
            if (isinstance(other.value, int) and int(other.value) == 0):
                return self
            return SymbolicExpression("max(" + str(self.value) + ", " + str(other.value) + ")")
        elif (isinstance(self.value, str)) or (isinstance(other.value, str)):
            return self  if other.value == 0 else other if self.value == 0 else SymbolicExpression("max(" + str(self.value) + ", " + str(other.value) + ")")
        else:
            return SymbolicExpression(max(self.value, other.value))

    def adapt_min(self, other):
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

