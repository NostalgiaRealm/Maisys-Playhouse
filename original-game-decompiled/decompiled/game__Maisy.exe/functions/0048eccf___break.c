
/* ==== __break @ 0048eccf ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0048eccf-0048eccf
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


