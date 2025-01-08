#ifndef KEYCODES_H
#define KEYCODES_H

static std::unordered_map<unsigned char, unsigned short> winVkToMacNative = {
    {0x08, 0x33}, // Backspace
    {0x09, 0x30}, // Tab
    {0x0D, 0x24}, // Enter
    {0x1B, 0x35}, // Escape
    {0x20, 0x31}, // Spacebar
    {0x21, 0x74}, // Page Up
    {0x22, 0x79}, // Page Down
    {0x23, 0x73}, // End
    {0x24, 0x77}, // Home
    {0x25, 0x7B}, // Arrow Left
    {0x26, 0x7E}, // Arrow Up
    {0x27, 0x7C}, // Arrow Right
    {0x28, 0x7D}, // Arrow Down
    {0x2C, 0x50}, // Print Screen
    {0x2D, 0x2D}, // Insert
    {0x2E, 0x2E}, // Delete
    {0x30, 0x1D}, // '0'
    {0x31, 0x12}, // '1'
    {0x32, 0x13}, // '2'
    {0x33, 0x14}, // '3'
    {0x34, 0x15}, // '4'
    {0x35, 0x17}, // '5'
    {0x36, 0x16}, // '6'
    {0x37, 0x1A}, // '7'
    {0x38, 0x1C}, // '8'
    {0x39, 0x19}, // '9'
    {0x41, 0x00}, // 'A'
    {0x42, 0x0B}, // 'B'
    {0x43, 0x08}, // 'C'
    {0x44, 0x02}, // 'D'
    {0x45, 0x0E}, // 'E'
    {0x46, 0x03}, // 'F'
    {0x47, 0x05}, // 'G'
    {0x48, 0x04}, // 'H'
    {0x49, 0x22}, // 'I'
    {0x4A, 0x26}, // 'J'
    {0x4B, 0x28}, // 'K'
    {0x4C, 0x25}, // 'L'
    {0x4D, 0x2E}, // 'M'
    {0x4E, 0x2D}, // 'N'
    {0x4F, 0x1F}, // 'O'
    {0x50, 0x23}, // 'P'
    {0x51, 0x0C}, // 'Q'
    {0x52, 0x0F}, // 'R'
    {0x53, 0x01}, // 'S'
    {0x54, 0x11}, // 'T'
    {0x55, 0x20}, // 'U'
    {0x56, 0x09}, // 'V'
    {0x57, 0x0D}, // 'W'
    {0x58, 0x07}, // 'X'
    {0x59, 0x10}, // 'Y'
    {0x5A, 0x06}, // 'Z'
    {0x5B, 0x1D}, // Left Windows
    {0x5C, 0x1F}, // Right Windows
    {0x60, 0x52}, // Numpad 0
    {0x61, 0x53}, // Numpad 1
    {0x62, 0x54}, // Numpad 2
    {0x63, 0x55}, // Numpad 3
    {0x64, 0x56}, // Numpad 4
    {0x65, 0x57}, // Numpad 5
    {0x66, 0x58}, // Numpad 6
    {0x67, 0x59}, // Numpad 7
    {0x68, 0x5B}, // Numpad 8
    {0x69, 0x5C}, // Numpad 9
    {0x6A, 0x43}, // Multiply
    {0x6B, 0x45}, // Add
    {0x6D, 0x4E}, // Subtract
    {0x6E, 0x41}, // Decimal
    {0x6F, 0x4B}, // Divide
    {0x70, 0x47}, // F1
    {0x71, 0x48}, // F2
    {0x72, 0x49}, // F3
    {0x73, 0x4A}, // F4
    {0x74, 0x4D}, // F5
    {0x75, 0x47}, // F6
    {0x76, 0x48}, // F7
    {0x77, 0x49}, // F8
    {0x78, 0x4A}, // F9
    {0x79, 0x4B}, // F10
    {0x7A, 0x4C}, // F11
    {0x7B, 0x4E}, // F12
    {0x7C, 0x52}, // F13
    {0x7D, 0x53}, // F14
    {0x7E, 0x54}, // F15
    {0x7F, 0x6E}, // F16
    {0xFC, 0x6D}, // F17
    {0xFD, 0x67}, // F18
    {0xFE, 0x69}, // F19
    {0xFF, 0x6B}, // F20
    {0x90, 0x71}, // Num Lock
    {0x91, 0x72}, // Scroll Lock
    {0xA0, 0x38}, // Left Shift
    {0xA1, 0x3A}, // Right Shift
    {0xA2, 0x3B}, // Left Control
    {0xA3, 0x3D}, // Right Control
    {0xA4, 0x3E}, // Left Alt
    {0xA5, 0x3F}, // Right Alt
    {0xB0, 0x18}, // Equals
    {0xB1, 0x1B}, // Minus
    {0xB2, 0x1E}, // Right Bracket
    {0xB3, 0x21}, // Left Bracket
    {0xB4, 0x27}, // Quote
    {0xB5, 0x2A}, // Semicolon
    {0xB6, 0x2A}, // Backslash
    {0xB7, 0x2B}, // Comma
    {0xB8, 0x2C}, // Forward slash
    {0xB9, 0x2F}, // Period
    {0xBA, 0x32}, // Backtick
    {0xBC, 0x24},

};

#endif
