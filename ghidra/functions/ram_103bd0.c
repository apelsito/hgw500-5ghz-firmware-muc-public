/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00103bd0 */

void FUN_ram_00103bd0(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  
  puVar1 = *(uint **)(param_1 + 0x198);
  if (param_2 == 0) {
    uVar2 = *puVar1 | 0x8000000;
  }
  else {
    uVar2 = *puVar1 & 0xf7ffffff;
  }
  *puVar1 = uVar2;
  uVar2 = puVar1[1];
  if (param_2 == 0) {
    uVar2 = uVar2 | 0x8000000;
  }
  else {
    uVar2 = uVar2 & 0xf7ffffff;
  }
  puVar1[1] = uVar2;
  uVar2 = puVar1[2];
  if (param_2 == 0) {
    uVar2 = uVar2 | 0x8000000;
  }
  else {
    uVar2 = uVar2 & 0xf7ffffff;
  }
  puVar1[2] = uVar2;
  uVar2 = puVar1[3];
  if (param_2 == 0) {
    uVar2 = uVar2 | 0x8000000;
  }
  else {
    uVar2 = uVar2 & 0xf7ffffff;
  }
  puVar1[3] = uVar2;
  uVar2 = puVar1[4];
  if (param_2 == 0) {
    uVar2 = uVar2 | 0x8000000;
  }
  else {
    uVar2 = uVar2 & 0xf7ffffff;
  }
  puVar1[4] = uVar2;
  uVar2 = puVar1[5];
  if (param_2 == 0) {
    uVar2 = uVar2 | 0x8000000;
  }
  else {
    uVar2 = uVar2 & 0xf7ffffff;
  }
  puVar1[5] = uVar2;
  uVar2 = puVar1[6];
  if (param_2 == 0) {
    uVar2 = uVar2 | 0x8000000;
  }
  else {
    uVar2 = uVar2 & 0xf7ffffff;
  }
  puVar1[6] = uVar2;
  uVar2 = puVar1[7];
  if (param_2 == 0) {
    uVar2 = uVar2 | 0x8000000;
  }
  else {
    uVar2 = uVar2 & 0xf7ffffff;
  }
  puVar1[7] = uVar2;
  uVar2 = puVar1[8];
  if (param_2 == 0) {
    uVar2 = uVar2 | 0x8000000;
  }
  else {
    uVar2 = uVar2 & 0xf7ffffff;
  }
  puVar1[8] = uVar2;
  uVar2 = puVar1[9];
  if (param_2 == 0) {
    uVar2 = uVar2 | 0x8000000;
  }
  else {
    uVar2 = uVar2 & 0xf7ffffff;
  }
  puVar1[9] = uVar2;
  uVar2 = puVar1[10];
  if (param_2 == 0) {
    uVar2 = uVar2 | 0x8000000;
  }
  else {
    uVar2 = uVar2 & 0xf7ffffff;
  }
  puVar1[10] = uVar2;
  uVar2 = puVar1[0xb];
  if (param_2 == 0) {
    uVar2 = uVar2 | 0x8000000;
  }
  else {
    uVar2 = uVar2 & 0xf7ffffff;
  }
  puVar1[0xb] = uVar2;
  uVar2 = puVar1[0xc];
  if (param_2 == 0) {
    uVar2 = uVar2 | 0x8000000;
  }
  else {
    uVar2 = uVar2 & 0xf7ffffff;
  }
  puVar1[0xc] = uVar2;
  uVar2 = puVar1[0xd];
  if (param_2 == 0) {
    uVar2 = uVar2 | 0x8000000;
  }
  else {
    uVar2 = uVar2 & 0xf7ffffff;
  }
  puVar1[0xd] = uVar2;
  uVar2 = puVar1[0xe];
  if (param_2 == 0) {
    uVar2 = uVar2 | 0x8000000;
  }
  else {
    uVar2 = uVar2 & 0xf7ffffff;
  }
  puVar1[0xe] = uVar2;
  uVar2 = puVar1[0xf];
  if (param_2 == 0) {
    uVar2 = uVar2 | 0x8000000;
  }
  else {
    uVar2 = uVar2 & 0xf7ffffff;
  }
  puVar1[0xf] = uVar2;
  return;
}


