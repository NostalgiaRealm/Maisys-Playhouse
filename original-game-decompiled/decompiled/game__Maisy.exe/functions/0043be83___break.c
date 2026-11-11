
/* ==== __break @ 0043be83 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043be83-0043be83
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


