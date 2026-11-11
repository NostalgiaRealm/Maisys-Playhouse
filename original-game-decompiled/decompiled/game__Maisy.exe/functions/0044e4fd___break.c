
/* ==== __break @ 0044e4fd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0044e4fd-0044e4fd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


