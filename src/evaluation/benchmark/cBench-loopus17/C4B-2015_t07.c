void fish() { return; }

void start(int x, int y)
{
  while (x>0) {
    x=x-1;
    y=y+2;
  }
  while (y>0) {
    y=y-1;
  }
  fish();
  while (y>0) {
    y=y-1;
  }
}

