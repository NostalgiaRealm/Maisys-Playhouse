
/* ==== __break @ 0044e60b ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e60b-0044e60b
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


