
/* ==== __break @ 00469729 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00469729-00469729
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


