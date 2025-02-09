import pygame
pygame.init()
screen =pygame.display.set_mode((400,400))


black=(0, 0, 0, 255)
blue = (0, 0, 255, 255)
cyan = (0, 255, 255, 255)
gold= (255, 215, 0, 255)
gray= (190, 190, 190, 255)
green= (0, 255, 0, 255)
orange= (255, 165, 0, 255)
purple= (160, 32, 240, 255)
red= (255, 0, 0, 255)
violet= (238, 130, 238, 255)
yellow= (255, 255, 0, 255)
white= (255, 255, 255, 255)

screen.fill(white)
pygame.display.flip()

running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False

pygame.quit()