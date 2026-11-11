
/* ==== __break @ 0044deec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044deec-0044deec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


