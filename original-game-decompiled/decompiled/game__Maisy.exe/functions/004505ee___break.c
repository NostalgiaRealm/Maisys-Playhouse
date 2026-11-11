
/* ==== __break @ 004505ee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004505ee-004505ee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


