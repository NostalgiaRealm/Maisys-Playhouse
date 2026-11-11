
/* ==== __break @ 0044e836 ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e836-0044e836
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


