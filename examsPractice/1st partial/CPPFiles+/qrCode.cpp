#include <iostream>
#include <qrcodegen/QrCode.hpp>

int main() {
    const char* text = "Hello, World!";
    const qrcodegen::QrCode::Ecc errCorLvl = qrcodegen::QrCode::Ecc::MEDIUM; // Error correction level

    qrcodegen::QrCode qr = qrcodegen::QrCode::encodeText(text, errCorLvl);
    
    // Printing the QR code as a text string
    std::cout << qr.toSvgString(4) << std::endl;

    return 0;
}
