from ultralytics import YOLO
model=YOLO("best.pt")
model.predict(mode="predict",model="best.pt", save=True,show=True,conf=0.1,source="img-1002.jpg")


