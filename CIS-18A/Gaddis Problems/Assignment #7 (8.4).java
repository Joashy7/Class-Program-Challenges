class Main{
  class Rectangle{
    private float length;
    private float width;
    
    public Rectangle(){
      this.setLength(1);
      this.setWidth(1);
    }
    
    public void setLength(float l) {
      if (l > 0 && l < 20)
        length = l;
      else 
        throw new IllegalArgumentException("length must be 0-20");
    }
    
    public void setWidth(float w) {
      if (w > 0 && w < 20)
        width = w;
      else
        throw new IllegalArgumentException("width must be 0-20");
    }
    
    public float getLength() {
      return length;
    }
    public float getWidth() {
      return width;
    }
    public float calculatePerimeter() {
      return (length * 2) + (width * 2);
    }
    public float calculateArea() {
      return length * width;
    }
  }    
  
  public static void main(String[] args) {
  Rectangle rectangle1 = new Rectangle();
  System.out.printf("Shape 1 Length:", rectangle1.getLength());
  System.out.printf("%nShape 1 Width:", rectangle1.getWidth());
  System.out.printf("%nShape 1 Perimeter:", rectangle1.calculatePerimeter());
  System.out.printf("%nShape 1 Area:", rectangle1.calculateArea());
  
  Rectangle rectangle2 = new Rectangle();
  rectangle2.setLength(5); 
  rectangle2.setWidth(10);
  System.out.printf("%nShape 2 Length:", rectangle2.getLength());
  System.out.printf("%nShape 2 Width:", rectangle2.getWidth());
  System.out.printf("%nShape 2 Perimeter:", rectangle2.calculatePerimeter());
  System.out.printf("%nShape 2 Area:", rectangle2.calculateArea());
  }
}