# import turtle 
# s=turtle.screen().bgcolor('grey')
# t=turtle.Turtle()
# t.speed(3)
# t.width(12)

# def Curve():
#     for i in range(200):
#         t.right(1)
#         t.forward(1)

# def curve():
#     t.colour('red','red')
#     t.begin_fill()
# #     t.left(140)
#     t.forward(113)
#     curve()
#     t.left(120)
#     curve()
#     t.forward(112)
#     t.end_fill()

# heart()
# t.pencolour('grey')
# t.penup()
# t.goto(0,170)
# t.pe




from random import randrange
skill = "cannot code"
interest = False
learning = 0
while not interest and skill == "cannot code":
    learning += randrange(0,100)
    if learning >= 1000:
        print("kajal crying a little less")
        chance = randrange(1,100)
        if chance %13 ==0:
            break
        continue
    print("kajal crying")

    print("oof , I'm out now")
    print("My learning of python is" , learning , "which obviously doesn't mean anything. why are you reading this metric anyway?")






