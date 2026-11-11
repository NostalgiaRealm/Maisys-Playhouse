
/* ==== __break @ 004799ee ==== 
 * signature: noreturn undefined __stdcall __break(void)
 * body: 004799ee-004799ee
 */

void __break(void)

{
  code *pcVar1;
  
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


