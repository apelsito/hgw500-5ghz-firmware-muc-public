/* Ghidra pseudocode derived from OEM firmware. */
/* language ARCompact:LE:32:default; entry ram:00141b28 */

uint FUN_ram_00141b28(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  
  uVar2 = param_2 * 0x8000;
  if ((uint)(param_1 * 0x10000) < uVar2) {
    uVar1 = param_1 << 0x11;
  }
  else {
    uVar1 = (param_1 * 0x10000 + param_2 * -0x8000) * 2 + 1;
  }
  if (uVar1 < uVar2) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = (uVar1 + param_2 * -0x8000) * 2 + 1;
  }
  if (uVar1 < uVar2) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = (uVar1 + param_2 * -0x8000) * 2 + 1;
  }
  if (uVar1 < uVar2) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = (uVar1 + param_2 * -0x8000) * 2 + 1;
  }
  if (uVar1 < uVar2) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = (uVar1 + param_2 * -0x8000) * 2 + 1;
  }
  if (uVar1 < uVar2) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = (uVar1 + param_2 * -0x8000) * 2 + 1;
  }
  if (uVar1 < uVar2) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = (uVar1 + param_2 * -0x8000) * 2 + 1;
  }
  if (uVar1 < uVar2) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = (uVar1 + param_2 * -0x8000) * 2 + 1;
  }
  if (uVar1 < uVar2) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = (uVar1 + param_2 * -0x8000) * 2 + 1;
  }
  if (uVar1 < uVar2) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = (uVar1 + param_2 * -0x8000) * 2 + 1;
  }
  if (uVar1 < uVar2) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = (uVar1 + param_2 * -0x8000) * 2 + 1;
  }
  if (uVar1 < uVar2) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = (uVar1 + param_2 * -0x8000) * 2 + 1;
  }
  if (uVar1 < uVar2) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = (uVar1 + param_2 * -0x8000) * 2 + 1;
  }
  if (uVar1 < uVar2) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = (uVar1 + param_2 * -0x8000) * 2 + 1;
  }
  if (uVar1 < uVar2) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = (uVar1 + param_2 * -0x8000) * 2 + 1;
  }
  if (uVar1 < uVar2) {
    uVar1 = uVar1 * 2;
  }
  else {
    uVar1 = (uVar1 + param_2 * -0x8000) * 2 + 1;
  }
  return uVar1 & 0xffff;
}


