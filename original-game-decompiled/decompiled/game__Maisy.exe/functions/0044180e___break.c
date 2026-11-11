
/* ==== __break @ 0044180e ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044180e-0044180e
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


