
/* ==== __break @ 14021cab ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 14021cab-14021cab
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


