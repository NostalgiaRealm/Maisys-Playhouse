
/* ==== __break @ 0044e596 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e596-0044e596
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


