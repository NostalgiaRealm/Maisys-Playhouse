
/* ==== __break @ 0044e30f ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e30f-0044e30f
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


