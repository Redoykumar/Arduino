#ifndef __font_chip_h__
#define __font_chip_h__

/*
  *** Generated by rrefontgen ***
  Font:         [chip] 16x16
  Total chars:  24 (' ' to '7')
  Total rects:  202 * 2 bytes
  Total pixels: 2371 (23 overlapping)
  Total bytes:  452 (404 rects + 48 offs)
  Bitmap size:  768 (16x16 * 24) (+24 opt)
*/

const unsigned short fontchip_Rects[202] PROGMEM = {
  0x00dd, 0x11ec, 0x41be, 0x006f, 0x1788, 0x047b, 0x40b0, 0x0394, 0x5ea1, 0x6e90, 0x2960, 0x0552, 0x007a, 0x028a, 0x0045, 0x50af, 
  0x34c0, 0x12e5, 0x02b0, 0x00d5, 0x00a0, 0x01f8, 0x00fd, 0x210b, 0x507a, 0x4088, 0x304c, 0x015a, 0x1069, 0x018d, 0x10be, 0x10ee, 
  0x02c7, 0x003b, 0x0058, 0x006b, 0x009e, 0x00af, 0x00b6, 0x00c5, 0x00dd, 0x00df, 0x00fb, 0x720d, 0x00f4, 0x47b8, 0x6100, 0x2690, 
  0x21d6, 0x02c2, 0x10e0, 0x4080, 0x0071, 0x00c6, 0x00d4, 0x00e3, 0x00e5, 0xad02, 0xff00, 0xed10, 0x002e, 0x0b00, 0xc13e, 0x6b90, 
  0x2660, 0x0089, 0x1240, 0x1177, 0x0153, 0x01ac, 0x0030, 0x43bc, 0x00d2, 0x11c0, 0x14e0, 0x001c, 0x000b, 0x020d, 0x00ff, 0x0407, 
  0x3023, 0x2031, 0x2035, 0x203c, 0x2069, 0x2088, 0x208a, 0x600f, 0x1014, 0x1016, 0x0119, 0x106b, 0x107c, 0x0003, 0x0005, 0x000d, 
  0x001c, 0x002b, 0x003a, 0x0044, 0x0049, 0x004b, 0x0052, 0x005a, 0x005e, 0x0096, 0x009b, 0x00a9, 0x00dd, 0x00df, 0x00ee, 0x00fd, 
  0x321d, 0x00f9, 0x4400, 0x53ac, 0x6090, 0x2173, 0x5092, 0x50aa, 0x03a5, 0x20cb, 0x0152, 0x01b6, 0x0050, 0x0061, 0x0064, 0x0070, 
  0x0072, 0x0081, 0x00a3, 0x00c3, 0x00c8, 0x00d7, 0x00d9, 0x00e1, 0x00e8, 0x00f7, 0x9a05, 0x00f0, 0x0df2, 0xef00, 0x0df0, 0xef00, 
  0xa400, 0x6125, 0x13b0, 0x0096, 0x0167, 0x01d0, 0x0015, 0x0047, 0x0079, 0x0287, 0x4009, 0x00af, 0x0226, 0x2035, 0x1037, 0x017d, 
  0x10ad, 0x0007, 0x0016, 0x001a, 0x001e, 0x0024, 0x002f, 0x0033, 0x003e, 0x0048, 0x004f, 0x0056, 0x005e, 0x006f, 0x008d, 0x008f, 
  0x009c, 0x009e, 0x00ab, 0x020d, 0x00a0, 0x1466, 0x3113, 0x0865, 0x1032, 0x1061, 0x0001, 0x0012, 0x0021, 0x0030, 0x0041, 0x0050, 
  0x0054, 0x0080, 0x0088, 0x0091, 0x5a05, 0x2600, 0x0430, 0x0140, 0x0117, 0x0307, 
};

const unsigned short fontchip_CharOffs[25] PROGMEM = {
  0x0000, 0x0003, 0x0009, 0x0010, 0x0016, 0x0016, 0x0016, 0x002c, 0x003a, 0x003b, 0x003f, 0x0048, 0x004b, 0x004e, 0x0071, 0x008b, 
  0x008e, 0x0090, 0x009a, 0x009a, 0x009a, 0x00b4, 0x00c5, 0x00ca, 0x00ca, 
};

RRE_Font rre_chip = { RRE_16B, 16,16, ' ', '7', (const uint8_t*)fontchip_Rects, (const uint16_t*)fontchip_CharOffs };

#endif
