
/* ==== __break @ 0044e82a ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e82a-0044e82a
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


