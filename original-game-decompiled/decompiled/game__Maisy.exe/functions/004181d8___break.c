
/* ==== __break @ 004181d8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004181d8-004181d8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


