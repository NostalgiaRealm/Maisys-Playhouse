
/* ==== __break @ 0044e5a6 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e5a6-0044e5a6
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


