
/* ==== __break @ 0040392e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040392e-0040392e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


