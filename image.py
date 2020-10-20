from cv2 import *
img=cv2.imread("elon.jpg")
print(img)
cv2.imshow("abc",img)
cv2.waitKey(0)
cv2.destroyAllWindows()