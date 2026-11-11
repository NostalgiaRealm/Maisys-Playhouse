
/* ==== __break @ 14021aec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021aec-14021aec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


