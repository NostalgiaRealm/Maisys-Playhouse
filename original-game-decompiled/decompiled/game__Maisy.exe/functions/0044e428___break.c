
/* ==== __break @ 0044e428 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e428-0044e428
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


