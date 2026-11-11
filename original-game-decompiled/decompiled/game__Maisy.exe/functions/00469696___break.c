
/* ==== __break @ 00469696 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00469696-00469696
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


