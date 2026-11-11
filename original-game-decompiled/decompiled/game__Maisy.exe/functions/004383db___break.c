
/* ==== __break @ 004383db ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004383db-004383db
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


