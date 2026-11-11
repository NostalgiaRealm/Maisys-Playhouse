
/* ==== __break @ 00422984 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00422984-00422984
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


