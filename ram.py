import turtle

def draw_square(some_turtle):
    for i in range(1,5):
        some_turtle.farword(100)
        some_turtle.right(90)
        
window=turtle.Screen()
window.bgcolor("red")
brad=turtle.Turtle()
brad.shape("turtle")
brad.color("yellow")
brad.speed(2)
draw_square(brad)
angie=turtle.Turtle()
angie.shape("arrow")
angie.color("blue")
angie.circle(100)               
