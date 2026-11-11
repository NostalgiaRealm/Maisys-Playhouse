
/* ==== __break @ 0048b4fd ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048b4fd-0048b4fd
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


