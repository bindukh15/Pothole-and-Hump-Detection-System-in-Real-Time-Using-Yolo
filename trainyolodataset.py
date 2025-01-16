from ultralytics import YOLO
model=YOLO("yolo.pt")
model.train(task="detect", mode='train', epochs=50, data='data_custom.yaml', model='yolo.pt', imgsz=640, batch=2)