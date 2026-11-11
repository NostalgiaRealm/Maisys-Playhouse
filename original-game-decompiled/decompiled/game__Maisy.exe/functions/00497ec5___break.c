
/* ==== __break @ 00497ec5 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 00497ec5-00497ec5
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


