
/* ==== __break @ 0040e2ec ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040e2ec-0040e2ec
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


