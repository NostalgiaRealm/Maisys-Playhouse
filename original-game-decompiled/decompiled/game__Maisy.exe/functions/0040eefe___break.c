
/* ==== __break @ 0040eefe ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 0040eefe-0040eefe
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


