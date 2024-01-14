// Exercise 10.11
class Circle2D {
  // Two double data fields named x and y that specify 
  //the center of the circle with getter methods.
  private double x;
  private double y;
  // A data field radius with a getter method.
  private double radius;

  // A no-arg constructor that creates a default 
  // circle with (0, 0) for (x, y) and 1 for radius.
  public Circle2D() {
    x = 0;
    y = 0;
    radius = 1;
  }

  // A constructor that creates a circle with the specified x, y, and radius.
  public Circle2D(double x, double y, double radius) {
    this.x = x;
    this.y = y;
    this.radius = radius;
  }

  //A method getArea() that returns the area of the circle.
  public double getArea() {
    return Math.PI * Math.pow(radius, 2);
  }

  // A method getPerimeter() that returns the perimeter of the circle.
  public double getPerimeter() {
    return 2 * Math.PI * radius;
  }

  // A method contains(double x, double y) that returns true if the
  // specified point (x, y) is inside this circle.
  public boolean contains(double x, double y) {
    double distanceFromCenterPoint = Math.sqrt(Math.pow(this.x - x, 2) + Math.pow(this.y - y, 2));
    return distanceFromCenterPoint < radius;
  }
  
  // A method contains(Circle2D circle) that returns true 
  // if the specified circle is inside this circle.
  public boolean contains(Circle2D circle2D) {
    double distFromCenterPoints = Math.sqrt(Math.pow(circle2D.getX() - this.x, 2) + Math.pow(circle2D.getY() - this.y, 2));
      return this.radius > (distFromCenterPoints + circle2D.getRadius());
  }

  // A method overlaps(Circle2D circle) that returns true if the 
  // specified circle overlaps with this circle.
  public boolean overlaps(Circle2D circle2D) {
    double distCentPoints = Math.sqrt(Math.pow(circle2D.getX() - this.x, 2) + Math.pow(circle2D.getY() - this.y, 2));
    double rSqSum = Math.pow(circle2D.getRadius() + this.radius, 2);
    return distCentPoints < rSqSum;
  }
  
  // Accessors
  public double getX() {return x;}
  public double getY() {return y;}
  public double getRadius() {return radius;}
}

public class Exercise10_11 {
    public static void main(String[] args) {
        Circle2D c1 = new Circle2D(2, 2, 5.5);
        System.out.println("Circle2D c1 = new Circle2D(2, 2, 5.5):");
        String area = String.format("%.4f", c1.getArea());
        System.out.println("Circle2D c1's area = " + area);

        String p = String.format("%.4f", c1.getPerimeter());
        System.out.println("perimeter = " + p);

        System.out.println("Result of c1.contains(3,3) = " + c1.contains(3, 3));
        System.out.println("Result of c1.contains(new Circle2D(4,5,10.5)) = " + c1.contains(new Circle2D(4, 5, 10.5)));
        System.out.println("Result of c1.overlaps(new Circle2D(3,5,2.3)) = " + c1.overlaps(new Circle2D(3, 5, 2.3)));
    }
}

