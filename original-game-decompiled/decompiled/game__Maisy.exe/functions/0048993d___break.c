
/* ==== __break @ 0048993d ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048993d-0048993d
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


