
/* ==== __break @ 0043602f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043602f-0043602f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


