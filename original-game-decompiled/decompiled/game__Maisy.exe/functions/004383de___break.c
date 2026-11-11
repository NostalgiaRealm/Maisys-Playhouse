
/* ==== __break @ 004383de ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004383de-004383de
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


