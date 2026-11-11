
/* ==== __break @ 14020687 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14020687-14020687
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


