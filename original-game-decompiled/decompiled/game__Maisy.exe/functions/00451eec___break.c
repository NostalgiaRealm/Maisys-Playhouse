
/* ==== __break @ 00451eec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00451eec-00451eec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


