
/* ==== __break @ 0044e5a8 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e5a8-0044e5a8
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


