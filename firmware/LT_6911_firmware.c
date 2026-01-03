#include <stdbool.h>
#include <stdint.h>

#ifndef __xdata
#define __xdata
#endif

/* --- Mapping both naming styles to addresses --- */
/* Standard Accessor Macros (Forces modifiable l-values) */
#define _XB(addr) (*(volatile uint8_t __xdata *)(addr))
#define _XW(addr) (*(volatile uint16_t __xdata *)(addr))
#define _XL(addr) (*(volatile uint32_t __xdata *)(addr))
#define DAT_EXTMEM_0100 _XB(0x0100)
#define DAT_EXTMEM_0101 _XB(0x0101)
#define DAT_EXTMEM_0102 _XB(0x0102)
#define DAT_EXTMEM_0103 _XB(0x0103)
#define DAT_EXTMEM_0104 _XB(0x0104)
#define DAT_EXTMEM_0105 _XB(0x0105)
#define DAT_EXTMEM_0106 _XB(0x0106)
#define DAT_EXTMEM_0107 _XB(0x0107)
#define DAT_EXTMEM_0108 _XB(0x0108)
#define DAT_EXTMEM_0109 _XB(0x0109)
#define DAT_EXTMEM_010A _XB(0x010A)
#define DAT_EXTMEM_010B _XB(0x010B)
#define DAT_EXTMEM_010C _XB(0x010C)
#define DAT_EXTMEM_010D _XB(0x010D)
#define DAT_EXTMEM_010E _XB(0x010E)
#define DAT_EXTMEM_010F _XB(0x010F)
#define DAT_EXTMEM_0110 _XB(0x0110)
#define DAT_EXTMEM_0111 _XB(0x0111)
#define DAT_EXTMEM_0112 _XB(0x0112)
#define DAT_EXTMEM_0113 _XB(0x0113)
#define DAT_EXTMEM_0114 _XB(0x0114)
#define DAT_EXTMEM_0115 _XB(0x0115)
#define DAT_EXTMEM_0116 _XB(0x0116)
#define DAT_EXTMEM_0117 _XB(0x0117)
#define DAT_EXTMEM_0118 _XB(0x0118)
#define DAT_EXTMEM_0119 _XB(0x0119)
#define DAT_EXTMEM_011A _XB(0x011A)
#define DAT_EXTMEM_011B _XB(0x011B)
#define DAT_EXTMEM_011C _XB(0x011C)
#define DAT_EXTMEM_011D _XB(0x011D)
#define DAT_EXTMEM_011E _XB(0x011E)
#define DAT_EXTMEM_011F _XB(0x011F)
#define DAT_EXTMEM_0120 _XB(0x0120)
#define DAT_EXTMEM_0121 _XB(0x0121)
#define DAT_EXTMEM_0122 _XB(0x0122)
#define DAT_EXTMEM_0123 _XB(0x0123)
#define DAT_EXTMEM_0124 _XB(0x0124)
#define DAT_EXTMEM_0125 _XB(0x0125)
#define DAT_EXTMEM_0126 _XB(0x0126)
#define DAT_EXTMEM_0127 _XB(0x0127)
#define DAT_EXTMEM_0128 _XB(0x0128)
#define DAT_EXTMEM_0129 _XB(0x0129)
#define DAT_EXTMEM_012A _XB(0x012A)
#define DAT_EXTMEM_012B _XB(0x012B)
#define DAT_EXTMEM_012C _XB(0x012C)
#define DAT_EXTMEM_012D _XB(0x012D)
#define DAT_EXTMEM_012E _XB(0x012E)
#define DAT_EXTMEM_012F _XB(0x012F)
#define DAT_EXTMEM_0130 _XB(0x0130)
#define DAT_EXTMEM_0131 _XB(0x0131)
#define DAT_EXTMEM_0132 _XB(0x0132)
#define DAT_EXTMEM_0133 _XB(0x0133)
#define DAT_EXTMEM_0134 _XB(0x0134)
#define DAT_EXTMEM_0135 _XB(0x0135)
#define DAT_EXTMEM_0136 _XB(0x0136)
#define DAT_EXTMEM_0137 _XB(0x0137)
#define DAT_EXTMEM_0138 _XB(0x0138)
#define DAT_EXTMEM_0139 _XB(0x0139)
#define DAT_EXTMEM_013A _XB(0x013A)
#define DAT_EXTMEM_013B _XB(0x013B)
#define DAT_EXTMEM_013C _XB(0x013C)
#define DAT_EXTMEM_013D _XB(0x013D)
#define DAT_EXTMEM_013E _XB(0x013E)
#define DAT_EXTMEM_013F _XB(0x013F)
#define DAT_EXTMEM_0140 _XB(0x0140)
#define DAT_EXTMEM_0141 _XB(0x0141)
#define DAT_EXTMEM_0142 _XB(0x0142)
#define DAT_EXTMEM_0143 _XB(0x0143)
#define DAT_EXTMEM_0144 _XB(0x0144)
#define DAT_EXTMEM_0145 _XB(0x0145)
#define DAT_EXTMEM_0146 _XB(0x0146)
#define DAT_EXTMEM_0147 _XB(0x0147)
#define DAT_EXTMEM_0148 _XB(0x0148)
#define DAT_EXTMEM_0149 _XB(0x0149)
#define DAT_EXTMEM_014A _XB(0x014A)
#define DAT_EXTMEM_014B _XB(0x014B)
#define DAT_EXTMEM_014C _XB(0x014C)
#define DAT_EXTMEM_014D _XB(0x014D)
#define DAT_EXTMEM_014E _XB(0x014E)
#define DAT_EXTMEM_014F _XB(0x014F)
#define DAT_EXTMEM_0150 _XB(0x0150)
#define DAT_EXTMEM_0151 _XB(0x0151)
#define DAT_EXTMEM_0152 _XB(0x0152)
#define DAT_EXTMEM_0153 _XB(0x0153)
#define DAT_EXTMEM_0154 _XB(0x0154)
#define DAT_EXTMEM_0155 _XB(0x0155)
#define DAT_EXTMEM_0156 _XB(0x0156)
#define DAT_EXTMEM_0157 _XB(0x0157)
#define DAT_EXTMEM_0158 _XB(0x0158)
#define DAT_EXTMEM_0159 _XB(0x0159)
#define DAT_EXTMEM_015A _XB(0x015A)
#define DAT_EXTMEM_015B _XB(0x015B)
#define DAT_EXTMEM_015C _XB(0x015C)
#define DAT_EXTMEM_015D _XB(0x015D)
#define DAT_EXTMEM_015E _XB(0x015E)
#define DAT_EXTMEM_015F _XB(0x015F)
#define DAT_EXTMEM_0160 _XB(0x0160)
#define DAT_EXTMEM_0161 _XB(0x0161)
#define DAT_EXTMEM_0162 _XB(0x0162)
#define DAT_EXTMEM_0163 _XB(0x0163)
#define DAT_EXTMEM_0164 _XB(0x0164)
#define DAT_EXTMEM_0165 _XB(0x0165)
#define DAT_EXTMEM_0166 _XB(0x0166)
#define DAT_EXTMEM_0167 _XB(0x0167)
#define DAT_EXTMEM_0168 _XB(0x0168)
#define dsi_lane_count _XB(0x0169)
#define DAT_EXTMEM_016A _XB(0x016A)
#define DAT_EXTMEM_016B _XB(0x016B)
#define pixel_clock _XB(0x016C)
#define DAT_EXTMEM_016D _XB(0x016D)
#define DAT_EXTMEM_016E _XB(0x016E)
#define DAT_EXTMEM_016F _XB(0x016F)
#define DAT_EXTMEM_0170 _XB(0x0170)
#define DAT_EXTMEM_0171 _XB(0x0171)
#define H_img_size_high _XB(0x0172)
#define H_img_size_size_low _XB(0x0173)
#define H_front_porch_high _XB(0x0174)
#define H_front_porch_low _XB(0x0175)
#define H_sync_width_high _XB(0x0176)
#define H_sync_width_low _XB(0x0177)
#define H_back_porch_high _XB(0x0178)
#define H_back_porch_low _XB(0x0179)
#define DAT_EXTMEM_017A _XB(0x017A)
#define DAT_EXTMEM_017B _XB(0x017B)
#define V_img_size_high _XB(0x017C)
#define V_img_size_low _XB(0x017D)
#define V_front_porch _XB(0x017E)
#define DAT_EXTMEM_017F _XB(0x017F)
#define h_sync_width_lo_stash _XB(0x0180)
#define H_sync_polarity _XB(0x0181)
#define V_sync_polarity _XB(0x0182)
#define DAT_EXTMEM_0183 _XB(0x0183)
#define DAT_EXTMEM_0184 _XB(0x0184)
#define mipi_port_count _XB(0x0185)
#define DAT_EXTMEM_0186 _XB(0x0186)
#define DAT_EXTMEM_0187 _XB(0x0187)
#define DAT_EXTMEM_0188 _XB(0x0188)
#define DAT_EXTMEM_0189 _XB(0x0189)
#define DAT_EXTMEM_018A _XB(0x018A)
#define DAT_EXTMEM_018B _XB(0x018B)
#define input_freq_khz _XB(0x018C)
#define DAT_EXTMEM_018D _XB(0x018D)
#define DAT_EXTMEM_018E _XB(0x018E)
#define DAT_EXTMEM_018F _XB(0x018F)
#define DAT_EXTMEM_0190 _XB(0x0190)
#define DAT_EXTMEM_0191 _XB(0x0191)
#define DAT_EXTMEM_0192 _XB(0x0192)
#define DAT_EXTMEM_0193 _XB(0x0193)
#define DAT_EXTMEM_0194 _XB(0x0194)
#define DAT_EXTMEM_0195 _XB(0x0195)
#define DAT_EXTMEM_0196 _XB(0x0196)
#define system_init_state _XB(0x0197)
#define DAT_EXTMEM_0198 _XB(0x0198)
#define DAT_EXTMEM_0199 _XB(0x0199)
#define is_first_run _XB(0x019A)
#define bridge_initialized _XB(0x019B)
#define DAT_EXTMEM_019C _XB(0x019C)
#define DAT_EXTMEM_019D _XB(0x019D)
#define DAT_EXTMEM_019E _XB(0x019E)
#define DAT_EXTMEM_019F _XB(0x019F)

// prototypes start

/* Copy data from flash. */
void xcode_to_xdata(uint16_t dst_address, uint16_t src_address, uint16_t length);

// DPTR:2    address
// R4R5R6R7:4    address
static void xdata_write_uint32_t(void *address, uint32_t);

// R5:1    byte_data
// R6:1    addr_hi
// R7:1    addr_low
static void xdata_write(uint8_t uint8_t_data, uint8_t addr_hi,
                        uint8_t addr_low);

// R7:1     <RETURN>
// R6:1     param_1
// R7:1     param_2
static uint8_t xdata_read(uint8_t param_1, uint8_t param_2);

// Reads a single byte from the CODE (Flash) memory space.
static uint8_t read_code_byte(uint16_t address);

// Reads a 16-bit Big-Endian value from XDATA.
static uint16_t xdata_read_uint16(uint8_t addr_hi, uint8_t addr_low);

static void delay_ms(uint8_t delay);
static void delay_500ms(void);

static void CRT_Store_Long_To_Xdata(uint16_t address, uint32_t value);

// prototypes


static void HDMI_RX_Equalizer_Training(void) {
  uint8_t r3_loop;
  uint8_t temp8;
  uint16_t current_val, best_val;
  uint16_t code_base;
  uint8_t *ptr;

  DAT_EXTMEM_0103 = 0xFF;
  DAT_EXTMEM_0104 = 0xFF;
  DAT_EXTMEM_0105 = 0xFF;
  DAT_EXTMEM_0106 = 0xFF;
  DAT_EXTMEM_0107 = 0xFF;
  DAT_EXTMEM_0108 = 0xFF;
  // here is code content starting at address 0x2112
  // FF FF 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  // 00 00 00 00 00 00 00
  // FF FF 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  // 00 00 00 00 00 00 00
  // FF FF 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
  // 00 00 00 00 00 00

  xcode_to_xdata(0x0109, 0x2112, 32);
  xcode_to_xdata(0x0129, 0x2132, 32);
  xcode_to_xdata(0x0149, 0x2152, 32);

  xdata_write(0x01, 0xd8, 0);

  // --- Main Loop: Index 0x0F down to 0x07 ---
  for (r3_loop = 0x0F; r3_loop != 0x06; r3_loop--) {
    // The table data starting at 0x23EA:
    // 00 01 00 00 00 00 00 00 00 01 00 01 00 00 00 01 00 01 00 02 00
    // 00 00 02 00 01 00 03 00 00 00 03 00 02 00 07 00 00 00 07 00 02 00 0B 00
    // 00 00 0B 00 02 00 0F 00 00 00 0F 00 04 00 1F 00 00 00 1F
    code_base = 0x23EA + (uint16_t)(r3_loop << 2); // r3 * 4

    // Setup hardware parameters from Flash
    temp8 = read_code_byte(code_base + 1);
    xdata_write(((temp8 & 0x0F) << 4), 0xD8, 0x5A); // Nibble swap
    xdata_write(temp8, 0xD8, 0x5C);
    xdata_write(temp8 * 0x11, 0xD8, 0x5B);

    code_base = 0x23EC + (uint16_t)(r3_loop << 2);
    xdata_write(read_code_byte(code_base + 1), 0xD8, 0x5D);
    xdata_write(read_code_byte(code_base + 1), 0xD8, 0x5E);

    // Reset error counters and sample for a while.
    xdata_write(0x07, 0xC0, 0x20);
    xdata_write(0x01, 0xC0, 0x20);
    delay_ms(100);

    current_val = ((uint16_t)(xdata_read(0xC0, 0x24) & 0x7F) << 8) +
                  xdata_read(0xC0, 0x25);
    ptr = (uint8_t __xdata *)(0x0109 + (r3_loop << 1));
    ptr[0] = (uint8_t)(current_val >> 8);
    ptr[1] = (uint8_t)(current_val & 0xFF);

    best_val = ((uint16_t)DAT_EXTMEM_0103 << 8) | DAT_EXTMEM_0104;
    if (current_val <= best_val) {
      DAT_EXTMEM_0103 = ptr[0];
      DAT_EXTMEM_0104 = ptr[1];
      DAT_EXTMEM_0100 = r3_loop;
    }

    // --- Section 2: Update Best for 0x105:0106 ---
    current_val = ((uint16_t)(xdata_read(0xC0, 0x26) & 0x7F) << 8) +
                  xdata_read(0xC0, 0x27);
    ptr = (uint8_t __xdata *)(0x0129 + (r3_loop << 1));
    ptr[0] = (uint8_t)(current_val >> 8);
    ptr[1] = (uint8_t)(current_val & 0xFF);

    best_val = ((uint16_t)DAT_EXTMEM_0105 << 8) | DAT_EXTMEM_0106;
    if (current_val <= best_val) {
      DAT_EXTMEM_0105 = ptr[0];
      DAT_EXTMEM_0106 = ptr[1];
      DAT_EXTMEM_0101 = r3_loop;
    }

    // --- Section 3: Update Best for 0x107:0108 ---
    current_val = ((uint16_t)(xdata_read(0xC0, 0x28) & 0x7F) << 8) +
                  xdata_read(0xC0, 0x29);
    ptr = (uint8_t __xdata *)(0x0149 + (r3_loop << 1));
    ptr[0] = (uint8_t)(current_val >> 8);
    ptr[1] = (uint8_t)(current_val & 0xFF);

    best_val = ((uint16_t)DAT_EXTMEM_0107 << 8) | DAT_EXTMEM_0108;
    if (current_val <= best_val) {
      DAT_EXTMEM_0107 = ptr[0];
      DAT_EXTMEM_0108 = ptr[1];
      DAT_EXTMEM_0102 = r3_loop;
    }
  }

  // Final Write using Best Index from Section 1
  // Use Best Index 1
  code_base = 0x23EA + (uint16_t)(DAT_EXTMEM_0100 << 2);
  xdata_write(read_code_byte(code_base + 1) * 0x11, 0xD8, 0x5A);

  code_base = 0x23EC + (uint16_t)(DAT_EXTMEM_0100 << 2);
  xdata_write(read_code_byte(code_base + 1), 0xD8, 0x5B);
  xdata_write(read_code_byte(code_base + 1), 0xD8, 0x5C);

  // Use Best Index 3 (Partial High Nibble)
  code_base = 0x23EA + (uint16_t)(DAT_EXTMEM_0102 << 2);
  temp8 = ((read_code_byte(code_base + 1) & 0x0F) << 4);

  // Combine with Best Index 2
  code_base = 0x23EA + (uint16_t)(DAT_EXTMEM_0101 << 2);
  xdata_write(read_code_byte(code_base + 1) + temp8, 0xD8, 0x5D);

  code_base = 0x23EC + (uint16_t)(DAT_EXTMEM_0101 << 2);
  xdata_write(read_code_byte(code_base + 1), 0xD8, 0x5E);

  // Final entry from Best Index 3
  code_base = 0x23EC + (uint16_t)(DAT_EXTMEM_0102 << 2);
  xdata_write(read_code_byte(code_base + 1), 0xD8, 0x5F);
}

static bool unknown_complex_init(void) {
  uint32_t acc32;
  uint8_t val;

  xdata_write(0x0b, 0xa0, 0x34);
  delay_ms(0xa);
  CRT_Store_Long_To_Xdata(0x0100, 0);

  // Byte 1: read(B8, B2) -> 0x100 = (0x100 << 8) + read
  val = xdata_read(0xB8, 0xB2);
  acc32 = ((uint32_t)DAT_EXTMEM_0100 << 24) |
          ((uint32_t)DAT_EXTMEM_0101 << 16) | ((uint32_t)DAT_EXTMEM_0102 << 8) |
          (uint32_t)DAT_EXTMEM_0103;
  acc32 = (acc32 << 8) + (uint32_t)val;
  CRT_Store_Long_To_Xdata(0x0100, acc32);

  // Byte 2: read(B8, B3) -> 0x100 = (0x100 << 8) + read
  val = xdata_read(0xB8, 0xB3);
  acc32 = ((uint32_t)DAT_EXTMEM_0100 << 24) |
          ((uint32_t)DAT_EXTMEM_0101 << 16) | ((uint32_t)DAT_EXTMEM_0102 << 8) |
          (uint32_t)DAT_EXTMEM_0103;
  acc32 = (acc32 << 8) + (uint32_t)val;
  CRT_Store_Long_To_Xdata(0x0100, acc32);

  xdata_write(0x01, 0xA0, 0x34);

  // --- Part 2: 16-bit Pair Processing (Load -> Add -> Shift) ---
  // Process D2:89 & D2:8A
  DAT_EXTMEM_0104 = xdata_read(0xD2, 0x89);
  DAT_EXTMEM_0105 = 0;
  DAT_EXTMEM_0105 += xdata_read(0xD2, 0x8A);
  val = (DAT_EXTMEM_0105 & 0x80) ? 1 : 0; // Carry for RLC
  DAT_EXTMEM_0105 <<= 1;
  DAT_EXTMEM_0104 = (DAT_EXTMEM_0104 << 1) | val;
  DAT_EXTMEM_0106 = xdata_read(0xD2, 0x8B);
  DAT_EXTMEM_0107 = 0;
  DAT_EXTMEM_0107 += xdata_read(0xD2, 0x8C);
  val = (DAT_EXTMEM_0107 & 0x80) ? 1 : 0;
  DAT_EXTMEM_0107 <<= 1;
  DAT_EXTMEM_0106 = (DAT_EXTMEM_0106 << 1) | val;
  DAT_EXTMEM_0108 = xdata_read(0xD2, 0x9C);
  DAT_EXTMEM_0109 = 0;
  DAT_EXTMEM_0109 += xdata_read(0xD2, 0x9D);
  val = (DAT_EXTMEM_0109 & 0x80) ? 1 : 0;
  DAT_EXTMEM_0109 <<= 1;
  DAT_EXTMEM_0108 = (DAT_EXTMEM_0108 << 1) | val;
  DAT_EXTMEM_010A = xdata_read(0xD2, 0x94);
  DAT_EXTMEM_010B = 0;
  DAT_EXTMEM_010B += xdata_read(0xD2, 0x95);
  val = (DAT_EXTMEM_010B & 0x80) ? 1 : 0;
  DAT_EXTMEM_010B <<= 1;
  DAT_EXTMEM_010A = (DAT_EXTMEM_010A << 1) | val;
  DAT_EXTMEM_010C = xdata_read(0xD2, 0x98);
  DAT_EXTMEM_010D = 0;
  DAT_EXTMEM_010D += xdata_read(0xD2, 0x99);
  val = (DAT_EXTMEM_010D & 0x80) ? 1 : 0;
  DAT_EXTMEM_010D <<= 1;
  DAT_EXTMEM_010C = (DAT_EXTMEM_010C << 1) | val;
  DAT_EXTMEM_010E = xdata_read(0xD2, 0x9E);
  DAT_EXTMEM_010F = 0;
  DAT_EXTMEM_010F += xdata_read(0xD2, 0x9F);
  DAT_EXTMEM_0110 = xdata_read(0xD2, 0x96);
  DAT_EXTMEM_0111 = 0;
  DAT_EXTMEM_0111 += xdata_read(0xD2, 0x97);
  DAT_EXTMEM_0112 = xdata_read(0xD2, 0x88);
  DAT_EXTMEM_0113 = xdata_read(0xD2, 0x86);
  DAT_EXTMEM_0114 = xdata_read(0xD2, 0x87);
  val = xdata_read(0xD2, 0xA0);
  DAT_EXTMEM_0115 = (val & 0x02) >> 1;
  DAT_EXTMEM_0116 = (val & 0x01);

  acc32 = ((uint32_t)DAT_EXTMEM_0100 << 24) |
          ((uint32_t)DAT_EXTMEM_0101 << 16) | ((uint32_t)DAT_EXTMEM_0102 << 8) |
          (uint32_t)DAT_EXTMEM_0103;

  if (acc32 < 0x0001C350L) {
    dsi_lane_count = 0x02;
  } else {
    dsi_lane_count = 0x04;
  }

  // pixel clock
  CRT_Store_Long_To_Xdata(0x016C, acc32);

  DAT_EXTMEM_0170 = DAT_EXTMEM_0105;
  DAT_EXTMEM_0171 = DAT_EXTMEM_0104;
  H_img_size_high = DAT_EXTMEM_0107;
  H_img_size_size_low = DAT_EXTMEM_0106;
  H_front_porch_high = DAT_EXTMEM_0109;
  H_front_porch_low = DAT_EXTMEM_0108;
  H_sync_width_high = DAT_EXTMEM_010B;
  H_sync_width_low = DAT_EXTMEM_010A;
  H_back_porch_high = DAT_EXTMEM_010D;
  H_back_porch_low = DAT_EXTMEM_010C;
  DAT_EXTMEM_017A = DAT_EXTMEM_010F;
  DAT_EXTMEM_017B = DAT_EXTMEM_010E;
  V_img_size_high = DAT_EXTMEM_0111;
  V_img_size_low = DAT_EXTMEM_0110;
  V_front_porch = DAT_EXTMEM_0112;
  H_sync_width_low = DAT_EXTMEM_0113;
  h_sync_width_lo_stash = DAT_EXTMEM_0114;
  H_sync_polarity = DAT_EXTMEM_0115;
  V_sync_polarity = DAT_EXTMEM_0116;

  return true;
}

static void write_c2xx(void) {
  xdata_write(H_img_size_high, 0xc2, 0x0c);
  xdata_write(H_img_size_size_low, 0xc2, 0x0d);
  xdata_write(H_sync_width_low + h_sync_width_lo_stash, 0xc2, 0x35);
  xdata_write(V_img_size_high, 0xc2, 0x06);
  xdata_write(V_img_size_low, 0xc2, 0x07);
  xdata_write(0x55, 0xc2, 0xf);

  uint8_t cVar4 = 0x02;
  uint8_t bVar3 = H_img_size_high;
  do {
    bVar3 = bVar3 >> 1;
    cVar4 = cVar4 - 1;
  } while (cVar4 != 0x00);
  xdata_write(bVar3, 0xc2, 0x10);

  cVar4 = 0x02;
  bVar3 = H_img_size_high;
  uint8_t uint8_t_data = H_img_size_size_low;
  do {
    uint8_t_data = uint8_t_data >> 1 | bVar3 << 7;
    cVar4 = cVar4 + -1;
    bVar3 = bVar3 >> 1;
  } while (cVar4 != 0x00);

  xdata_write(uint8_t_data, 0xc2, 0x11);
  xdata_write(H_img_size_high >> 1, 0xc2, 0x38);
  xdata_write(H_img_size_size_low >> 1 | H_img_size_high << 7, 0xc2, 0x39);
  xdata_write(H_img_size_high >> 1, 0xc2, 0x36);
  xdata_write(H_img_size_size_low >> 1 | H_img_size_high << 7, 0xc2, 0x37);
  xdata_write(H_sync_width_low, 0xc2, 0x57);
  xdata_write(h_sync_width_lo_stash, 0xc2, 0x58);
  xdata_write(V_front_porch, 0xc2, 0x59);
  xdata_write(0x0f, 0xc2, 0x60);
  xdata_write(0xa6, 0xc2, 0x17);
  xdata_write(0xa6, 0xc2, 0x4c);
  xdata_write(0x3e, 0xc2, 0x12);
  xdata_write(0x3e, 0xc2, 0x5d);
}

static void write_b82b_OR_b82c(void){
  uint8_t bVar1;
  uint8_t bVar2;
  uint8_t addr_low;
  char cVar3;
  uint8_t *pbVar4;

  DAT_EXTMEM_0100 = 0xff;
  DAT_EXTMEM_0101 = 0xff;
  DAT_EXTMEM_0102 = 0xff;
  DAT_EXTMEM_0103 = 0xff;
  DAT_EXTMEM_0104 = 0xff;
  DAT_EXTMEM_0105 = 0xff;

  // Here is code content at address 0x266e
  // FF FF 00 00 00 00 00 00
  // FF FF 00 00 00 00 00 00
  // FF FF 00 00 00 00 00 00
  xcode_to_xdata(0x0106, 0x266e, 8);
  xcode_to_xdata(0x010e, 0x2676, 8);
  xcode_to_xdata(0x0116, 0x267e, 8);

  DAT_EXTMEM_011E = 0;
  DAT_EXTMEM_011F = 0;
  DAT_EXTMEM_0120 = 0;
  DAT_EXTMEM_0121 = 0;

  // --- Phase 2: Threshold Check ---
  // Read 32-bit value from 0x18C and compare with 100,000 (0x000186A0)
  if ((uint32_t)input_freq_khz < 100000L) {
    // --- Phase 3: Search Loop ---
    xdata_write(0x0F, 0xB8, 0x27);  // zeroed in shutdown

    for (uint8_t loop_idx = 0; loop_idx < 4; loop_idx++) {
      DAT_EXTMEM_011E = loop_idx;
      uint8_t temp8 = (loop_idx << 4); // SWAP and ANL F0

      // Apply test settings
      xdata_write(temp8, 0xB8, 0x29);
      xdata_write(temp8, 0xB8, 0x2A);
      xdata_write(temp8, 0xB8, 0x2B);

      // Trigger and Wait
      xdata_write(0x07, 0xC0, 0x20);
      xdata_write(0x01, 0xC0, 0x20);
      delay_ms(50); // 0x32

      // --- Section A: 16-bit Accumulation and Comparison ---
      // Read C0:24 & C0:25, store in array at 0x106 + (loop_idx * 2)
      uint16_t ptr_a = 0x0106 + (loop_idx << 1);
      *((uint8_t *)ptr_a) = xdata_read(0xC0, 0x24) & 0x7F;
      *((uint8_t *)(ptr_a + 1)) = 0;
      ptr_a += xdata_read(0xC0, 0x25);

      uint16_t current_val = *(uint16_t *)ptr_a;
      uint16_t best_val = (uint16_t)(DAT_EXTMEM_0100 << 8 | DAT_EXTMEM_0101);

      if (current_val < best_val) {
        DAT_EXTMEM_0100 = (uint8_t)(current_val >> 8);
        DAT_EXTMEM_0101 = (uint8_t)(current_val & 0xFF);
        DAT_EXTMEM_011F = loop_idx; // Save best index for Part A
      }

      // --- Section B: (Repeat for C0:26 & C0:27) ---
      uint16_t ptr_b = 0x010E + (loop_idx << 1);
      *((uint8_t volatile __xdata *)ptr_b) = xdata_read(0xC0, 0x26) & 0x7F;
      *((uint8_t volatile __xdata *)(ptr_b + 1)) = 0;
      ptr_b += xdata_read(0xC0, 0x27);

      current_val = *(uint16_t volatile __xdata *)ptr_b;
      best_val = (uint16_t)(DAT_EXTMEM_0102 << 8 | DAT_EXTMEM_0103);

      if (current_val < best_val) {
        DAT_EXTMEM_0102 = (uint8_t)(current_val >> 8);
        DAT_EXTMEM_0103 = (uint8_t)(current_val & 0xFF);
        DAT_EXTMEM_0120 = loop_idx; // Save best index for Part B
      }

      // --- Section C: (Repeat for C0:28 & C0:29) ---
      uint16_t ptr_c = 0x0116 + (loop_idx << 1);
      *((uint8_t volatile __xdata *)ptr_c) = xdata_read(0xC0, 0x28) & 0x7F;
      *((uint8_t volatile __xdata *)(ptr_c + 1)) = 0;
      ptr_c += xdata_read(0xC0, 0x29);

      current_val = *(uint16_t volatile __xdata *)ptr_c;
      best_val = (uint16_t)(DAT_EXTMEM_0104 << 8 | DAT_EXTMEM_0105);

      if (current_val < best_val) {
        DAT_EXTMEM_0104 = (uint8_t)(current_val >> 8);
        DAT_EXTMEM_0105 = (uint8_t)(current_val & 0xFF);
        DAT_EXTMEM_0121 = loop_idx; // Save best index for Part C
      }
    }

    // --- Phase 4: Finalize Settings ---
    // Write the "Winning" loop indices back to the registers
    xdata_write((DAT_EXTMEM_011F << 4), 0xB8, 0x29);
    xdata_write((DAT_EXTMEM_0120 << 4), 0xB8, 0x2A);
    xdata_write((DAT_EXTMEM_0121 << 4), 0xB8, 0x2B);
  }

  xdata_write(0, 0xB8, 0x27);
}

static void Configure_PLL_Dividers(void) {
  uint8_t mode;
  uint8_t temp_val;

  // Initialize memory
  DAT_EXTMEM_0100 = 0;
  DAT_EXTMEM_0101 = 0;
  DAT_EXTMEM_0102 = 0;

  uint32_t v1 = (uint32_t)pixel_clock / 1000;
  uint16_t res = (uint16_t)v1 * 3;
  res /= (uint16_t)dsi_lane_count;
  res /= (uint16_t)mipi_port_count;
  DAT_EXTMEM_0100 = (uint8_t)res;

  // Adjust and Clamp value at 0x100
  DAT_EXTMEM_0100 += 10;
  if (DAT_EXTMEM_0100 < 25) {
    DAT_EXTMEM_0100 = 25;
  }

  // Hardware Configuration sequence
  xdata_write(0x38, 0xB0, 0x3A);    //set to 0x38 in shutdown/reset
  xdata_write(0x01, 0xB0, 0x3B);

  temp_val = DAT_EXTMEM_0100;

  // Conditional Hardware Setup based on calculated value
  if (temp_val >= 80 && temp_val < 187) {
    xdata_write(0x18, 0xB0, 0x3E);
    DAT_EXTMEM_0101 = 1;
  } else if (temp_val >= 40 && temp_val < 80) {
    xdata_write(0x08, 0xB0, 0x3E);
    DAT_EXTMEM_0101 = 2;
  } else if (temp_val >= 20 && temp_val < 40) {
    xdata_write(0x28, 0xB0, 0x3E);
    DAT_EXTMEM_0101 = 4;
  } else if (temp_val >= 10 && temp_val < 20) {
    xdata_write(0x38, 0xB0, 0x3E);
    DAT_EXTMEM_0101 = 8;
  }

  xdata_write(0x10, 0xB0, 0x3F);

  // Further calculation: (val_100 * val_101 << 3) / 27
  uint16_t product = (uint16_t)DAT_EXTMEM_0100 * (uint16_t)DAT_EXTMEM_0101;
  uint16_t shifted_product = product << 3;
  uint16_t scaled_result = shifted_product / 0x001B;

  xdata_write((uint8_t)scaled_result, 0xB0, 0x41);

  // Bit-banging / Toggle sequence
  xdata_write(0xDF, 0x90, 0x0F);

  uint8_t reg_b044 = xdata_read(0xB0, 0x44);
  xdata_write(reg_b044 & 0xBF, 0xB0, 0x44); // Clear bit 6

  delay_ms(1);

  xdata_write(0xFF, 0x90, 0x0F);

  reg_b044 = xdata_read(0xB0, 0x44);
  xdata_write(reg_b044 | 0x40, 0xB0, 0x44); // Set bit 6

  xdata_write(0x1A, 0xa0, 0x34);
  delay_ms('\n');

  // Accumulate 16-bit value from hardware into 32-bit XDATA
  xdata_write_uint32_t(&DAT_EXTMEM_0190, 0);

  uint8_t uint8_t_hi = xdata_read(0xB8, 0xB2);
  uint32_t current_long = DAT_EXTMEM_0190;
  current_long = (current_long << 8) | uint8_t_hi;
  xdata_write_uint32_t(&DAT_EXTMEM_0190, current_long);

  uint8_t uint8_t_lo = xdata_read(0xB8, 0xB3);
  current_long = DAT_EXTMEM_0190;
  current_long = (current_long << 8) | uint8_t_lo;
  xdata_write_uint32_t(&DAT_EXTMEM_0190, current_long);

  xdata_write(0x01, 0xa0, 0x34);
  delay_ms('\n');

  // Final result is (AccumulatedValue * 4) stored at 0x102
  uint32_t final_calc = DAT_EXTMEM_0190 * 4;
  DAT_EXTMEM_0102 = (uint8_t)final_calc;
}

static bool HDMI_frequency_has_changed(void) {
  uint32_t diff;
  uint8_t r3_val, reg_val;

  xdata_write(1, 0xa0, 0x34);
  delay_ms('\n');

  DAT_EXTMEM_0100 = (uint32_t)xdata_read(0xb8, 0xb1);
  DAT_EXTMEM_0100 = (DAT_EXTMEM_0100 << 8) | xdata_read(0xB8, 0xB2);
  DAT_EXTMEM_0100 = (DAT_EXTMEM_0100 << 8) | xdata_read(0xB8, 0xB3);

  DAT_EXTMEM_0104 = (uint32_t)xdata_read(0xD2, 0x12);
  DAT_EXTMEM_0104 = ((uint32_t)DAT_EXTMEM_0104 << 8) | xdata_read(0xD2, 0x14);
  DAT_EXTMEM_0104 = ((uint32_t)DAT_EXTMEM_0104 << 8) | xdata_read(0xD2, 0x15);

  // 32-bit absolute difference comparison
  if ((uint32_t)DAT_EXTMEM_0104 > (uint32_t)DAT_EXTMEM_0100) {
    diff = (uint32_t)DAT_EXTMEM_0104 - (uint32_t)DAT_EXTMEM_0100;
  } else {
    diff = (uint32_t)DAT_EXTMEM_0100 - (uint32_t)DAT_EXTMEM_0104;
  }

  // If difference is less than 20,000 (0x4E20)
  if (diff >= 20000) {
    return true;
  } else {
    return false;
  }
}

static bool HDMI_bandwidth_set(void){
  uint8_t val_high, val_mid, val_low;
  xdata_write(0x01, 0xA0, 0x34);
  
  // Wait for hardware to stabilize
  delay_ms(10);

  val_high = xdata_read(0xb8, 0xb1);
  val_mid = xdata_read(0xb8, 0xb2);
  val_low = xdata_read(0xb8, 0xb3);

  // Combine into a 32-bit integer (The assembly does this via shifts and adds)
  // Formula: (val_high << 16) | (val_mid << 8) | val_low
  input_freq_khz = (uint32_t)val_high;
  input_freq_khz = (input_freq_khz << 8) + val_mid;
  input_freq_khz = (input_freq_khz << 8) + val_low;

  if ((uint32_t)input_freq_khz < 20000) {
      return false; 
  }
  if ((uint32_t)input_freq_khz >= 305000) {
      return false;
  }

  uint8_t setting;
  if ((uint32_t)input_freq_khz >= 197000) {
      setting = 0x47; 
  }
  else if ((uint32_t)input_freq_khz >= 96000) {
      setting = 0x67;
  }
  else {
      setting = 0x77;
  }

  xdata_write(setting, 0xb0, 0x2a);
  xdata_write( 0x42, 0xb0, 0x2b);

  return true;
}

void write_a044_b044_c2xx(void) {
    uint32_t quotient = DAT_EXTMEM_0190 / 1000;
    uint8_t base_factor = (uint8_t)(quotient & 0xFF); // This was R4 in your asm
    uint8_t r1_val = base_factor / 5;
    uint8_t r2_val = (base_factor / 18) + 2;
    uint8_t r3_val = base_factor / 20;

    DAT_EXTMEM_0100 = (base_factor / 6) + 1;
    DAT_EXTMEM_0101 = (base_factor / 10) + 1;
    DAT_EXTMEM_0102 = (base_factor / 12) + 8;
    DAT_EXTMEM_0103 = (base_factor / 25);

    uint8_t status = xdata_read(0xB0, 0x44);
    xdata_write(status | 0x80, 0xB0, 0x44);

    xdata_write(0x80, 0xA0, 0x44);
    xdata_write(0x49, 0xA0, 0x44);
    
    xdata_write(0x00, 0xC2, 0x00);
    xdata_write(0x56, 0xC2, 0x49); 
    xdata_write(0x0F, 0xC2, 0x20);
    xdata_write(0xFF, 0xC2, 0x25);
    xdata_write(0x2C, 0xC2, 0x2C);
    xdata_write(DAT_EXTMEM_0102, 0xC2, 0x22);
    xdata_write(DAT_EXTMEM_0103, 0xC2, 0x23);
    xdata_write(r1_val,           0xC2, 0x24);
    xdata_write(r2_val,           0xC2, 0x2F);
    xdata_write(r3_val,           0xC2, 0x30);
    xdata_write(0xAA,             0xC2, 0x31);
    xdata_write(r2_val,           0xC2, 0x52);
    xdata_write(r3_val,           0xC2, 0x53);
    xdata_write(0xAA,             0xC2, 0x54);
    xdata_write((base_factor / 10) + 8, 0xC2, 0x28);
    uint8_t final_sum = DAT_EXTMEM_0100 + r3_val + r2_val;
    xdata_write(final_sum, 0xC2, 0x2A);
    xdata_write(0x10, 0xC2, 0x1B);
    xdata_write(0x50, 0xC2, 0x1D);
    xdata_write(0x50, 0xC2, 0x2D);
}

static void MIPI_send_packet(const char *ptr){
  xdata_write(0x40, 0xc2, 0x1c);
  xdata_write(0xc, 0xc2, 0x18);
  xdata_write(4, 0xc2, 0x19);
  xdata_write(ptr[0], 0xc2, 0x34);
  xdata_write(ptr[1], 0xc2, 0x34);
  xdata_write(ptr[2], 0xc2, 0x34);
  delay_ms('\n');
  xdata_write(0, 0xc2, 0x18);
  return;
}

static void MIPI_TX_Lane_Configuration(void){
  xdata_write(0x00, 0xc2, 0x1c);
  xdata_write(0x80, 0xc2, 0x14);

  if (dsi_lane_count > 0x04) {
    delay_ms('\x14');
    xdata_write(DAT_EXTMEM_016B, 0xc2, 0x00);
    return;
  }

  uint8_t uVar1;
  if (dsi_lane_count == 0x01) {
    xdata_write(DAT_EXTMEM_016A | 0x10, 0xc2, 0x01);    //set to 0x00 in shutdown/reset
    xdata_write(DAT_EXTMEM_016A | 0x10, 0xc2, 0x56);    //set to 0x00 in shutdown/reset
    xdata_write(0x03, 0xc2, 0x02);
    uVar1 = 0;
  } else if (dsi_lane_count == 0x02) {
    xdata_write(DAT_EXTMEM_016A | 0x20, 0xc2, 0x01);
    xdata_write(DAT_EXTMEM_016A | 0x20, 0xc2, 0x56);
    xdata_write(0x02, 0xc2, 0x02);
    uVar1 = 0x58;
  } else if (dsi_lane_count == 0x03) {
    xdata_write(DAT_EXTMEM_016A | 0x30, 0xc2, 0x01);
    xdata_write(DAT_EXTMEM_016A | 0x30, 0xc2, 0x56);
    xdata_write(0x01, 0xc2, 0x02);
    uVar1 = 0x90;
  } else {
    xdata_write(DAT_EXTMEM_016A, 0xc2, 0x01);
    xdata_write(DAT_EXTMEM_016A, 0xc2, 0x56);
    xdata_write(0x01, 0xc2, 0x02);
    uVar1 = 0xa0;
  }

  xdata_write(uVar1, 0xc2, 0x03);
  delay_ms('\x14');
  xdata_write(DAT_EXTMEM_016B, 0xc2, 0x00);
  return;
}

/* Obviously MIPI related reg writes. */
static void write_a043_b0xx(void) {
  /* Possible values for 0x0a43 based on simplified config: FF, F5, E4 */
  xdata_write(0xf5, 0xa0, 0x43);

  xdata_write(0x00, 0xc2, 0x44);

  xdata_write(0x34, 0xb0, 0x55);
  xdata_write(0x9f, 0xb0, 0x5d);
  xdata_write(0x9f, 0xb0, 0x5f);
  xdata_write(0x8f, 0xb0, 0x61);
  xdata_write(0x9f, 0xb0, 0x63);
  xdata_write(0x9f, 0xb0, 0x65);

  xdata_write(0x34, 0xb0, 0x77);
  xdata_write(0x9f, 0xb0, 0x7f);
  xdata_write(0x9f, 0xb0, 0x81);
  xdata_write(0x8f, 0xb0, 0x83);
  xdata_write(0x9f, 0xb0, 0x85);
  xdata_write(0x9f, 0xb0, 0x87);
}

static bool HDMI_Link_Quality_is_good(void) {
  char cVar1;
  uint8_t bVar2;
  uint8_t bVar3;

  // copies FF FF 00 00 00 00
  xcode_to_xdata(0x0100, 0x2686, 6);

  // Reset error counters and sample for a while.
  xdata_write(0x07, 0xC0, 0x20);
  xdata_write(0x01, 0xC0, 0x20);
  delay_ms(100);

  uint16_t val1, val2, val3;
  uint16_t ch0_err = ((xdata_read(0xC0, 0x24) & 0x7F) << 8) | xdata_read(0xC0, 0x25);
  uint16_t ch1_err = ((xdata_read(0xC0, 0x26) & 0x7F) << 8) | xdata_read(0xC0, 0x27);
  uint16_t ch2_err = ((xdata_read(0xC0, 0x28) & 0x7F) << 8) | xdata_read(0xC0, 0x29);

  if (val1 == 0 && val2 == 0 && val3 == 0) {
      return false;
  }

  return true;
}

static void panel_enable(void){
  DAT_EXTMEM_0100 = 0;
  DAT_EXTMEM_0101 = 0;
  delay_ms('\x1e');
  MIPI_send_packet(lcd_sleep_out_cmd);
  delay_ms(-0x38);
  MIPI_send_packet(lcd_nop_cmd); 
  MIPI_send_packet(lcd_mfg_set1);
  MIPI_send_packet(lcd_mfg_set2);
  MIPI_send_packet(lcd_mfg_set3);
  MIPI_send_packet(lcd_MADCTL_cmd);
  MIPI_send_packet(lcd_COLMOD_cmd);
  MIPI_send_packet(lcd_display_on_cmd);
  MIPI_send_packet(lcd_NOP_cmd);
  delay_ms('\x1e');
  return;
}

static void panel_disable(void) {
  xdata_write(0x01, 0xd8, 0x00);
  xdata_write(0x00, 0xd8, 0x5a);
  xdata_write(0x07, 0xd8, 0x5b);
  xdata_write(0x07, 0xd8, 0x5c);
  xdata_write(0x00, 0xd8, 0x5b);
  xdata_write(0x07, 0xd8, 0x5c);
  xdata_write(0x07, 0xd8, 0x5d);
  MIPI_send_packet(lcd_display_off_cmd);
  MIPI_send_packet(lcd_sleep_cmd);
  return;
}

static bool HDMI_MIPI_config_valid(void) {
uint16_t hdmi_sig, mipi_sig;
    uint8_t  val1, val2, val3, val4;

    // --- 1. Calculate HDMI Input Signature ---
    // Reads H-Total High/Low and V-Total High
    val1 = xdata_read(0xD2, 0x8B);
    val2 = xdata_read(0xD2, 0x8C);
    
    // The "Weird Math": (Reg1 + Reg2) << 1
    // Note: The assembly handles 16-bit carry propagation (ADDC)
    uint16_t sum_hdmi = (uint16_t)val1 + val2; 
    hdmi_sig = sum_hdmi << 1; 

    // Add the third register (0xD2, 0x96)
    val3 = xdata_read(0xD2, 0x96); 
    hdmi_sig += val3; 
    
    // Note: The ASM also incorporates 0xD2, 0x97 (V-Total Low) at 1ed0
    // It adds it to the existing signature
    val4 = xdata_read(0xD2, 0x97);
    hdmi_sig += val4;

    // Calculate MIPI Output Signature
    // Reads H-Active High/Low and V-Active High
    val1 = xdata_read(0xC2, 0x0C);
    val2 = xdata_read(0xC2, 0x0D);
    
    uint16_t sum_mipi = (uint16_t)val1 + val2;
    mipi_sig = sum_mipi << 1;

    // Add the third register (0xC2, 0x06)
    val3 = xdata_read(0xC2, 0x06);
    mipi_sig += val3;

    // The ASM adds 0xC2, 0x07 (V-Active Low) at 1f10
    val4 = xdata_read(0xC2, 0x07);
    mipi_sig += val4;

    // If the timing signatures don't match, the FIFO is unstable.
    if (hdmi_sig != mipi_sig) {
        return true;
    }

    return false; // Timings match
}

static void write_b0xx_d1xx_9006(void) {
  xdata_write(0x00, 0xb0, 0x00);    // set to 0xC0 in shutdown/reset
  xdata_write(0x07, 0xb0, 0x8c);
  xdata_write(0x77, 0xb0, 0x8d);    // zered in shutdown/reset
  xdata_write(0x07, 0xb0, 0x8e);
  xdata_write(0x77, 0xb0, 0x8f);
  xdata_write(0x02, 0xd1, 0x13);
  xdata_write(0x19, 0xd1, 0x14);
  xdata_write(0xc2, 0xd1, 0x15);
  xdata_write(0x20, 0xd1, 0x10);
  xdata_write(0xff, 0xd1, 0x29);
  xdata_write(0x7f, 0x90, 0x06);
  delay_ms(1);
  xdata_write(0xff, 0x90, 0x06);
  return;
}

static void write_9062_a031_b0xx_b8xx_d283_a092(void) {
  xdata_write(0x99, 0x90, 0x62);
  xdata_write(0xf0, 0xa0, 0x31);

  xdata_write(0x20, 0xb0, 0x2e);
  xdata_write(0x00, 0xb0, 0x29);
  xdata_write(0x48, 0xb0, 0x30);
  xdata_write(0x05, 0xb0, 0x32);

  xdata_write(0x55, 0xb8, 0x21);
  xdata_write(0x40, 0xb8, 0x3a);
  xdata_write(0x11, 0xd2, 0x83);
  xdata_write(0x41, 0xb8, 0x08);
  xdata_write(0xf3, 0xa0, 0x92);
  return;
}

static void set_sync_polarity(void) {
  if (H_sync_polarity != 1) {
    uint8_t state = xdata_read(0xc0, 0x05);
    xdata_write(state ^ 0x20, 0xc0, 0x05); // Toggles bit 5
  }
  if (V_sync_polarity != 1) {
    uint8_t state = xdata_read(0xc0, 0x05);
    xdata_write(state ^ 0x10, 0xc0, 0x05); // Toggles bit 4
  }
}

static void write_900f_b814(void) {
  xdata_write(0x7f, 0x90, 0xf);
  delay_ms('\n');
  xdata_write(0xff, 0x90, 0xf);
  delay_ms('\n');
  xdata_write(0x14, 0xb8, 0x14);
  delay_ms(0x01);
  xdata_write(0x94, 0xb8, 0x14);
  delay_ms(0x01);
  xdata_write(0xb4, 0xb8, 0x14);
  delay_ms('\n');
  return;
}

static void clear_0b1f_2_write_900d_f_3(void) {
  xdata_write(0, 0xb0, 0x1f);
  xdata_write(0, 0xb0, 0x20);
  xdata_write(0xbf, 0x90, 0xf);
  xdata_write(0xfe, 0x90, 0xd);
  xdata_write(0xef, 0x90, 3);
  delay_ms('\n');
  xdata_write(0xff, 0x90, 0xd);
  xdata_write(0xff, 0x90, 0xf);
  xdata_write(0xff, 0x90, 3);
  return;
}

typedef struct {
    uint8_t  pixel_clock_low;
    uint8_t  pixel_clock_hi;   // Offset 0-1 (Stored Little Endian)
    uint8_t  h_active_low;     // Offset 2
    uint8_t  h_blanking_low;   // Offset 3
    uint8_t  h_active_blank_hi;// Offset 4 (Upper nibbles)
    uint8_t  v_active_low;     // Offset 5
    uint8_t  v_blanking_low;   // Offset 6
    uint8_t  v_active_blank_hi;// Offset 7 (Upper nibbles)
    uint8_t  h_fp_low;         // Offset 8
    uint8_t  h_sync_low;       // Offset 9
    uint8_t  v_fp_sync_low;    // Offset 10 (Nibbles)
    uint8_t  hv_fp_sync_hi;    // Offset 11 (High bits)
    uint8_t  h_size_mm_low;    // Offset 12
    uint8_t  v_size_mm_low;    // Offset 13
    uint8_t  hv_size_mm_hi;    // Offset 14
    uint8_t  h_border;         // Offset 15
    uint8_t  v_border;         // Offset 16
    uint8_t  features;         // Offset 17 (Sync polarity etc)
} DetailedTiming_t;

static void EDID_constructor(DetailedTiming_t *dtd) { // 0x0036 
  uint32_t var_math_32;
  uint8_t r7, r5;
  uint16_t temp16;


  temp16 = ((uint16_t)H_front_porch_high << 8 | H_front_porch_low) +
           ((uint16_t)H_sync_width_high << 8 | H_sync_width_low);
  temp16 += ((uint16_t)H_back_porch_high << 8 | H_back_porch_low);

  DAT_EXTMEM_0103 = (uint8_t)(temp16 >> 8);
  DAT_EXTMEM_0104 = (uint8_t)temp16;

  dtd->pixel_clock_low = (uint32_t)pixel_clock / 10;
  dtd->pixel_clock_hi = (uint32_t)pixel_clock / 2560;
  dtd->h_active_low = H_img_size_size_low;
  dtd->h_blanking_low = DAT_EXTMEM_0104;

  r7 = ((H_img_size_high << 4) & 0xF0) ^ (H_img_size_high & 0x0F);

  dtd->h_active_blank_hi = DAT_EXTMEM_0103 + r7;
  dtd->v_active_low = V_img_size_low;
  dtd->v_blanking_low = DAT_EXTMEM_0105 + r7;
    
  r7 = ((V_img_size_high << 4) & 0xF0) ^ (V_img_size_high & 0x0F);

  dtd->v_active_blank_hi = DAT_EXTMEM_0105 + r7;
  dtd->h_fp_low =H_front_porch_low;
  dtd->h_sync_low = H_sync_width_low;

  r7 = ((V_front_porch & 0x0F) << 4) | (H_sync_width_low & 0x0F);

  dtd->v_fp_sync_low = r7;

  uint16_t shift_reg = (uint16_t)H_front_porch_high << 6;
  r7 = (uint8_t)shift_reg + ((H_sync_width_high << 4) & 0xF0);
  r7 += ((V_front_porch >> 4) << 2);
  r7 += (H_sync_width_low >> 4);
  r5 = (H_img_size_high >> 4);

  dtd->hv_fp_sync_hi = r7;
  dtd->h_size_mm_low = H_img_size_size_low;
  dtd->v_size_mm_low = V_img_size_low;
  dtd->hv_size_mm_hi = V_img_size_high + r5;

  r7 = (H_sync_polarity << 1) | 0x18;
  r7 |= (V_sync_polarity << 2);

  dtd->features = r7;
}

static void EDID_checksum(uint8_t *edid_buf) {
  uint8_t sum;
  uint8_t i;

  sum = 0;
  for (i = 0; i < 0x7F; i++) {
    sum += edid_buf[i];
  }
  edid_buf[0x7F] = (uint8_t)(0 - sum);

  sum = 0;
  for (i = 0x80; i < 0xFF; i++) {
    sum += edid_buf[i];
  }
  edid_buf[0xFF] = (uint8_t)(0 - sum);
}

/* Move data over DDC */
static void EDID_send_to_host(void) {
  EDID_constructor((DetailedTiming_t *)0x0036);
  EDID_checksum(0x0000);
  xdata_write(0x03, 0xc0, 0x8e);
  uint8_t *edid_buf = 0x0000;

  do {
    xdata_write(*edid_buf, 0xc0, 0x90);
    edid_buf++;
  } while (edid_buf < 0x0100);
  xdata_write(0x02, 0xc0, 0x8e);
  return;
}

static void write_b0xx_900f(void) {
  xdata_write(0xbf, 0xb0, 0x92);
  xdata_write(0x00, 0xb0, 0x21);    //set to 0xC0 in shutdown/reset, same goes for 0xb000
  xdata_write(0xc1, 0xb0, 0x22);
  xdata_write(0x09, 0xb0, 0x28);
  xdata_write(0x2c, 0xb0, 0x25);
  xdata_write(0x7f, 0x90, 0x0f);
  delay_ms(10);
  xdata_write(0xff, 0x90, 0x0f);
  delay_ms(10);
  return;
}

static void write_b08c_70_mod_a046_mod_a048() {
  /* Note, that this is the first thing the chip does. */
  xdata_write(0x70, 0xb0, 0x8c);

  uint8_t bVar2 = xdata_read(0xa0, 0x46);
  xdata_write(bVar2 | 0x80, 0xa0, 0x46);

  bVar2 = xdata_read(0xa0, 0x48);
  /* This looks awfully like enable/disable a bunch of stuff. */
  if (BANK0_R5 == 0) {
    bVar2 = bVar2 & 0xfb;
  } else {
    bVar2 = bVar2 | 4;
  }
  xdata_write(bVar2, 0xa0, 0x48);
}

static void write_a035_43_write_a006_9(void) {
  xdata_write(0x43, 0xa0, 0x35);
  xdata_write(0x21, 0xa0, 0x06);
  xdata_write(0x04, 0xa0, 0x07);
  xdata_write(0x32, 0xa0, 0x08);
  xdata_write(0x10, 0xa0, 0x09);
  xdata_write(0x43, 0xa0, 0x10);
  xdata_write(0x21, 0xa0, 0x11);
  xdata_write(0x04, 0xa0, 0x12);
  xdata_write(0x32, 0xa0, 0x13);
  xdata_write(0x10, 0xa0, 0x14);
}

static void write_9010_9007_8(void) {
  xdata_write(0xfb, 0x90, 0x10);
  xdata_write(0xfb, 0x90, 7);
  xdata_write(0xdf, 0x90, 8);
  delay_ms('\n');
  xdata_write(0xff, 0x90, 8);
  xdata_write(0xff, 0x90, 7);
  xdata_write(0xff, 0x90, 0x10);
}

static void store_HDMI_freq_to_0xd212(void){
  xdata_write(1, 0xa0, 0x34);
  delay_ms('\n');
  xdata_write(xdata_read(0xb8, 0xb1), 0xd2, 0x12);
  xdata_write(xdata_read(0xb8, 0xb2), 0xd2, 0x14);
  xdata_write(xdata_read(0xb8, 0xb3), 0xd2, 0x15);
  return;
}

static bool HDMI_PLL_locked(void){
  xdata_write(0xfe, 0x90, 3);
  delay_ms(0x05);
  xdata_write(0xff, 0x90, 3);
  delay_ms('\n');
  uint8_t bVar1 = xdata_read(0xb8, 0xb0);
  if ((bVar1 & 0x40) == 0) {
    return false;
  }
  return true;
}

static void write_9055_to_905d(void){
  xdata_write(0x13, 0x90, 0x55);
  xdata_write(0x80, 0x90, 0x57);
  xdata_write(0x00, 0x90, 0x58);
  xdata_write(0x40, 0x90, 0x59);
  xdata_write(0x03, 0x90, 0x5a);
  xdata_write(0xff, 0x90, 0x5b);
  xdata_write(0x98, 0x90, 0x5d);
}

static bool HDMI_CLK_present(void) {
  for (int i = 0; i < 8; i++) {
    xdata_write(0x00, 0x01, i);
  }

  uint8_t state = xdata_read(0xb8, 0xb0);
  return state & 0x01;
}

static bool ret_a002___0x20(void){
  uint8_t bVar1;

  bVar1 = xdata_read(0xa0, 2);
  if ((bVar1 & 0x20) == 0x20) {
    return false;
  }
  return true;
}

static void system_standby(void) {
  xdata_write(0x00, 0xb8, 0x27);
  xdata_write(0xc0, 0xb0, 0x00);
  xdata_write(0x00, 0xb0, 0x8c);
  xdata_write(0x00, 0xb0, 0x8d);
  xdata_write(0x7f, 0x90, 0x06);
  xdata_write(0x38, 0xb0, 0x3a);
  xdata_write(0x00, 0xc2, 0x01);
  xdata_write(0x00, 0xc2, 0x56);
  xdata_write(0xbe, 0x90, 0x0a);    //not set anywhere else
  xdata_write(0x00, 0xc0, 0x05);
  xdata_write(0xfb, 0x90, 0x07);    //not set anywhere else
  write_b08c_70_mod_a046_mod_a048(); 
  xdata_write(0xff, 0x90, 0x07);
  xdata_write(0xc0, 0xb0, 0x21);
  is_first_run = true;
  bridge_initialized = 0;
}

static void main(void) {
  uint8_t bVar1;
  static bool bVar2;

  is_first_run = true;
  write_b08c_70_mod_a046_mod_a048();

  // These 3 could be just commands to prepare MIPI to send commands
  xdata_write(0x00, 0xc0, 0x06);
  write_9062_a031_b0xx_b8xx_d283_a092();
  write_b0xx_900f();
  
  EDID_send_to_host();
  panel_disable(); // At this point MIPI must be ready to talk?
  write_9055_to_905d();
  xdata_write(1, 0xa0, 0x34);
  delay_ms(44);
  xdata_write(0x08, 0xc0, 0x06);
  delay_500ms();
  system_init_state = 0;

  do {
    if (system_init_state == 0) {
      if (!HDMI_CLK_present()) {
        system_init_state = 0;
        continue;
      }
      
      if (is_first_run) {
        write_b0xx_900f();
        system_init_state = 1;
      }
      else { // Runs after init loop is complete
        if ((HDMI_frequency_has_changed() || HDMI_MIPI_config_valid())) {
          system_init_state = 4;
          break;
        }
      }
    }
    
    if (system_init_state == 1) {
      do {
        if (!HDMI_bandwidth_set())
          break;
        write_900f_b814();
      } while (!HDMI_PLL_locked());

      if (HDMI_PLL_locked()) {
        clear_0b1f_2_write_900d_f_3();
        write_b82b_OR_b82c();
        panel_disable();
        write_9010_9007_8();
        DAT_EXTMEM_0199 = 0;
        system_init_state = 2;

        if (HDMI_Link_Quality_is_good()) {
          HDMI_RX_Equalizer_Training();
        }

        do {
          delay_ms(20);
          if (!HDMI_PLL_locked()) {
            system_init_state = 1;
            break;
          }
        } while (ret_a002___0x20());

        xdata_write(0xfe, 0x90, 0xb);
        delay_ms(10);
        xdata_write(0x3f, 0x90, 10);
        delay_ms(10);
        xdata_write(0xbf, 0x90, 10);
      }
    }

    if (system_init_state == 2) {
      delay_500ms();
      if (unknown_complex_init() != 0) {
        is_first_run = false;
        set_sync_polarity();
        DAT_EXTMEM_0198 = 0;
        system_init_state = 3;
      }
    }

    if (system_init_state == 3) {
      store_HDMI_freq_to_0xd212();
      write_a035_43_write_a006_9();
      write_a043_b0xx();
      Configure_PLL_Dividers();
      write_a044_b044_c2xx();
      write_b08c_70_mod_a046_mod_a048();
      delay_500ms();
      panel_enable();
      write_c2xx();
      MIPI_TX_Lane_Configuration();
      write_b0xx_d1xx_9006();
      system_init_state = 0;
      bridge_initialized = 1;
    }

    if (system_init_state == 4) {
      if (is_first_run == false) {
        system_standby();
      }
      system_init_state = 0;
    }

  } while (true);
}