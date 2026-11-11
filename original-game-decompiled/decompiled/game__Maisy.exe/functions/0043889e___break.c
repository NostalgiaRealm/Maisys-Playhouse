
/* ==== __break @ 0043889e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0043889e-0043889e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


