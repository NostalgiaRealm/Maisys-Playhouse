
/* ==== __break @ 00418198 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00418198-00418198
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


