/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:0010d9e4 */

void FUN_ram_0010d9e4(undefined4 *param_1)

{
  (&DAT_ram_8002c26c)[DAT_ram_8002c268 * 0xc] = *param_1;
  (&DAT_ram_8002c270)[DAT_ram_8002c268 * 0xc] = param_1[1];
  (&DAT_ram_8002c294)[DAT_ram_8002c268 * 0xc] = param_1[10];
  (&DAT_ram_8002c290)[DAT_ram_8002c268 * 0xc] = param_1[9];
  (&DAT_ram_8002c280)[DAT_ram_8002c268 * 0xc] = param_1[5];
  (&DAT_ram_8002c284)[DAT_ram_8002c268 * 0xc] = param_1[6];
  (&DAT_ram_8002c288)[DAT_ram_8002c268 * 0xc] = param_1[7];
  (&DAT_ram_8002c28c)[DAT_ram_8002c268 * 0xc] = param_1[8];
  (&DAT_ram_8002c274)[DAT_ram_8002c268 * 0xc] = param_1[2];
  (&DAT_ram_8002c278)[DAT_ram_8002c268 * 0xc] = param_1[3];
  (&DAT_ram_8002c27c)[DAT_ram_8002c268 * 0xc] = param_1[4];
  (&DAT_ram_8002c298)[DAT_ram_8002c268 * 0xc] = param_1[0xb];
  DAT_ram_8002c268 = DAT_ram_8002c268 + 1 & 0x1f;
  return;
}


