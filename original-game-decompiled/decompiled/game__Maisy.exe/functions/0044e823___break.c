
/* ==== __break @ 0044e823 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e823-0044e823
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


