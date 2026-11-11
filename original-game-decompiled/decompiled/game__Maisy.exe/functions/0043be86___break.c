
/* ==== __break @ 0043be86 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043be86-0043be86
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


