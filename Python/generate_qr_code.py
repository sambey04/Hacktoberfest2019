import pyqrcode
from pyqrcode import QRCode

message = input("Enter message : ")

# Generate the qr code
qr = pyqrcode.create(message)

# Show the qr code
qr.show()

# Save the qr code as png
qr.png("my_qr.png", scale=10)