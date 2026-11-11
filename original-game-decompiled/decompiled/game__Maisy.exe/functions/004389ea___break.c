
/* ==== __break @ 004389ea ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004389ea-004389ea
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


